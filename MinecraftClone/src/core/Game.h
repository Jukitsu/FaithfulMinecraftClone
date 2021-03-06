#pragma once
#include "core/Camera.h"
#include "world/World.h"
#include "blocks/Block.h"

class Game {
public:
	Game();
	void hitCallback(int button, const glm::vec3& currentBlock, const glm::vec3& nextBlock);
	void tick(const float deltaTime);
	void onMousePress(int button);
private:
	Shader shader;
	TextureManager textureManager;
	Camera camera;
	std::unique_ptr<World> world;
	BlockID holding = 5;
	
	std::vector<Block> blocks;
};