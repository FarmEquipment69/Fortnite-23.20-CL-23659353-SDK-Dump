// Class /Script/Engine.AnimSequenceBase
// Size: 0xb0
class UAnimSequenceBase : public UAnimationAsset
{
	struct TArray<struct FAnimNotifyEvent> Notifies; // 0x80 (0x10)
	float SequenceLength; // 0x90 (0x4)
	float RateScale; // 0x94 (0x4)
	bool bLoop; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct FRawCurveTracks RawCurveData; // 0xa0 (0x10)
};

