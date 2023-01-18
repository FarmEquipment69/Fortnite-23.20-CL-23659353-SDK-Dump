// Class /Script/FortniteGame.FortWeaponComponent_RecoilCurve
// Size: 0x1f8
class UFortWeaponComponent_RecoilCurve : public UFortWeaponComponent
{
	unsigned char unreflected_a0[0x48]; // 0xa0 (0x48) 
	struct FScalableFloat InterpSpeed; // 0xe8 (0x28)
	bool bRandomizeHorizFlip; // 0x110 (0x1)
	bool bRandomizeVertFlip; // 0x111 (0x1)
	unsigned char unreflected_112[0x6]; // 0x112 (0x6) 
	struct FScalableFloat CurveTimeScale; // 0x118 (0x28)
	struct TArray<class UCurveVector*> RecoilVectorCurves; // 0x140 (0x10)
	enum EFortRecoilCurveType RecoilBehaviorType; // 0x150 (0x1)
	unsigned char unreflected_151[0x7]; // 0x151 (0x7) 
	struct FScalableFloat TargetingMult; // 0x158 (0x28)
	struct FScalableFloat VertRecoilMult; // 0x180 (0x28)
	struct FScalableFloat HorizRecoilMult; // 0x1a8 (0x28)
	struct FScalableFloat CurveLengthInSeconds; // 0x1d0 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortWeaponComponent_RecoilCurve.StartRecoilCurve (Underlying native function: StartRecoilCurve 0x871be50)
	void StartRecoilCurve(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.FortWeaponComponent_RecoilCurve.EndRecoilCurve (Underlying native function: EndRecoilCurve 0x8719c14)
	void EndRecoilCurve(); // (Final | Native | Protected | BlueprintCallable)
};

