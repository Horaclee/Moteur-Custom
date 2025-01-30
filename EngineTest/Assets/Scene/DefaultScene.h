#pragma once
#include "Core/Interface/IScene.h"



class DefaultScene : public Core::Interface::IScene
{
public:
	DefaultScene() = default;
	~DefaultScene() = default;

	bool Init() override 
	{
		SetName("DefaultScene");
		SetFilePath("EngineTest/Assets/Scene/DefaultScene.h");
		return true;
	}

	bool Start() override
	{
		Objects::GameObject* cube1 = new Objects::GameObject(this);
		cube1->SetName("Cube(1)");
		cube1->SetTransform(Core::CoreType::Transform(DirectX::XMFLOAT3(0.000000, 0.000000, 5.000000), DirectX::XMFLOAT3(-0.700000, -0.500000, -0.400000), DirectX::XMFLOAT3(1.000000, 1.000000, 1.000000)));
		cube1->SetTexturePath("EngineTest/Assets/Texture/cobblestone.png");
		cube1->MakeMesh(Core::CoreType::PrimitivesMesh::PrimitivesMeshType::Cube);
		return true;
	}

	bool Update() override
	{
		return true;
	}

	bool Stop() override
	{

		return true;
	}

	bool Destruct() override
	{

		return true;
	}

private:

};
