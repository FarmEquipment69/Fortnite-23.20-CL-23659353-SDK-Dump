// ScriptStruct /Script/FortniteGame.FortCurieGlowFadeRequest
// Size: 0x14
struct FFortCurieGlowFadeRequest
{
	struct TWeakObjectPtr<class UFortCurieComponent> CurieComponent; // 0x0 (0x8)
	struct FGameplayTag FxTag; // 0x8 (0x4)
	float StartTimestamp; // 0xc (0x4)
	bool bIsFadeIn; // 0x10 (0x1)
	unsigned char padding_11[0x3]; // 0x11 (0x3)
};

