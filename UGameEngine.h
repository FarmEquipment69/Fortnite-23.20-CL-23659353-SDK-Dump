// Class /Script/Engine.GameEngine
// Size: 0xf50
class UGameEngine : public UEngine
{
	float MaxDeltaTime; // 0xef8 (0x4)
	float ServerFlushLogInterval; // 0xefc (0x4)
	class UGameInstance* GameInstance; // 0xf00 (0x8)
	unsigned char padding_f08[0x48]; // 0xf08 (0x48)
};

