// ScriptStruct /Script/FortniteGame.InputActivationEvent
// Size: 0x58
struct FInputActivationEvent
{
	class APlayerController* Player; // 0x0 (0x8)
	struct FGameplayTagQuery EventQuery; // 0x8 (0x48)
	enum EInputActivationType ActivationType; // 0x50 (0x1)
	unsigned char padding_51[0x7]; // 0x51 (0x7)
};

