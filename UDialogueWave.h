// Class /Script/Engine.DialogueWave
// Size: 0x70
class UDialogueWave : public UObject
{
	unsigned char bMature; // 0x28 (0x1)
	unsigned char bOverrideSubtitleOverride; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct FString SpokenText; // 0x30 (0x10)
	struct FString SubtitleOverride; // 0x40 (0x10)
	struct TArray<struct FDialogueContextMapping> ContextMappings; // 0x50 (0x10)
	struct FGuid LocalizationGUID; // 0x60 (0x10)
};

