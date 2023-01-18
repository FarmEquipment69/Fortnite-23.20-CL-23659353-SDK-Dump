// ScriptStruct /Script/FortniteGame.FortNativeCurieFXResponse
// Size: 0x8
struct FFortNativeCurieFXResponse
{
	struct FGameplayTag OverrideGameplayCue; // 0x0 (0x4)
	enum EFortNativeCurieFXCueResponse GameplayCueResponse; // 0x4 (0x1)
	unsigned char bShouldPlayGeneralVFX; // 0x5 (0x1)
	unsigned char bShouldPlayAmbientAudio; // 0x5 (0x1)
	unsigned char bShouldPlayGlow; // 0x5 (0x1)
	unsigned char bShouldPlayFXAsAOE; // 0x5 (0x1)
	unsigned char padding_6[0x2]; // 0x6 (0x2)
};

