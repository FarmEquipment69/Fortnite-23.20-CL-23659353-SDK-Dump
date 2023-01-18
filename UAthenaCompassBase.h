// Class /Script/FortniteUI.AthenaCompassBase
// Size: 0x8e0
class UAthenaCompassBase : public UFortHUDElementWidget
{
	class UMaterialInstanceDynamic* CompassMaterial; // 0x2d0 (0x8)
	class UImage* ImageCompass; // 0x2d8 (0x8)
	struct FSlateBrush MarkerBrush; // 0x2e0 (0xc0)
	struct FSlateBrush HeadingIndicatorBrush; // 0x3a0 (0xc0)
	struct FSlateBrush StormIndicatorBrush; // 0x460 (0xc0)
	float MarkerVerticalOffset; // 0x520 (0x4)
	float DistanceTextVerticalOffset; // 0x524 (0x4)
	float DistanceTextHorizontalOffset; // 0x528 (0x4)
	unsigned char unreflected_52c[0x4]; // 0x52c (0x4) 
	struct FSlateFontInfo HeadingFont; // 0x530 (0x58)
	struct FSlateFontInfo DistanceTextFont; // 0x588 (0x58)
	struct FSlateBrush TeammateGunshotIndicatorBrush; // 0x5e0 (0xc0)
	struct FSlateBrush EnemyGunshotIndicatorBrush; // 0x6a0 (0xc0)
	float TimeToShowGunshotIndicators; // 0x760 (0x4)
	unsigned char unreflected_764[0x4]; // 0x764 (0x4) 
	class UCurveFloat* GunshotIndicatorScaleOverTime; // 0x768 (0x8)
	class UCurveFloat* GunshotIndicatorScaleByStrength; // 0x770 (0x8)
	class UCurveFloat* GunshotIndicatorAlphaOverTime; // 0x778 (0x8)
	class UCurveFloat* GunshotIndicatorAlphaByHeading; // 0x780 (0x8)
	unsigned char unreflected_788[0x8]; // 0x788 (0x8) 
	struct FSlateBrush DefaultPinnedQuestIconBrush; // 0x790 (0xc0)
	float PinnedQuestAlphaRotCutoff; // 0x850 (0x4)
	float PinnedQuestDistanceRotCutoff; // 0x854 (0x4)
	float PinnedQuestIconVerticalOffset; // 0x858 (0x4)
	float PinnedQuestDistanceTextVerticalOffset; // 0x85c (0x4)
	struct FSlateFontInfo PinnedQuestDistanceTextFont; // 0x860 (0x58)
	unsigned char padding_8b8[0x28]; // 0x8b8 (0x28)
};

