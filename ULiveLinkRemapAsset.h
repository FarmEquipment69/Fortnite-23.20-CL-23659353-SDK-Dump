// Class /Script/LiveLinkAnimationCore.LiveLinkRemapAsset
// Size: 0xc8
class ULiveLinkRemapAsset : public ULiveLinkRetargetAsset
{
	unsigned char unreflected_c8[0xc8]; 

	/* Functions */

	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.RemapCurveElements (Underlying native function: RemapCurveElements 0xa96e564)
	void RemapCurveElements(struct TMap<struct FName, float>& CurveItems); // (Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedCurveName (Underlying native function: GetRemappedCurveName 0xa96e4d8)
	struct FName GetRemappedCurveName(struct FName& CurveName); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/LiveLinkAnimationCore.LiveLinkRemapAsset.GetRemappedBoneName (Underlying native function: GetRemappedBoneName 0xa96e44c)
	struct FName GetRemappedBoneName(struct FName& BoneName); // (Native | Event | Public | BlueprintEvent | Const)
};

