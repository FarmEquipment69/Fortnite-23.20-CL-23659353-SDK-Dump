// Class /Script/HmxAudio.RepeatableMusicalAssetPlayerComponentBase
// Size: 0x1f0
class URepeatableMusicalAssetPlayerComponentBase : public UHarmonixPlayerComponentBase
{
	enum FAudioContinuationMode mContinuationMode; // 0x1e0 (0x1)
	unsigned char unreflected_1e1[0x3]; // 0x1e1 (0x3) 
	int mRepeatingTick; // 0x1e4 (0x4)
	bool mPlayOnStartPosition; // 0x1e8 (0x1)
	unsigned char padding_1e9[0x7]; // 0x1e9 (0x7)

	/* Functions */

	// Function /Script/HmxAudio.RepeatableMusicalAssetPlayerComponentBase.GetContinuationMode (Underlying native function: GetContinuationMode 0x5448d70)
	enum FAudioContinuationMode GetContinuationMode(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

