// ScriptStruct /Script/Engine.ClientReceiveData
// Size: 0x38
struct FClientReceiveData
{
	class APlayerController* LocalPC; // 0x0 (0x8)
	struct FName MessageType; // 0x8 (0x4)
	int MessageIndex; // 0xc (0x4)
	struct FString MessageString; // 0x10 (0x10)
	class APlayerState* RelatedPlayerState1; // 0x20 (0x8)
	class APlayerState* RelatedPlayerState2; // 0x28 (0x8)
	class UObject* OptionalObject; // 0x30 (0x8)
};

