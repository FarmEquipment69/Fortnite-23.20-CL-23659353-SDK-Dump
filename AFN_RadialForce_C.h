// BlueprintGeneratedClass /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C
// Size: 0x350
class AFN_RadialForce_C : public AFieldSystemActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UOperatorField* DistanceFadMult; // 0x298 (0x8)
	class URadialFalloff* DistanceFalloff; // 0x2a0 (0x8)
	class UWaveScalar* DecayScalar; // 0x2a8 (0x8)
	class UOperatorField* DecayMult; // 0x2b0 (0x8)
	class UWaveScalar* RadialFalloffWave; // 0x2b8 (0x8)
	class UOperatorField* RadialVecMultiplyRadialFallOff; // 0x2c0 (0x8)
	class URadialVector* RadialVector; // 0x2c8 (0x8)
	float Timeline0RadiusCD3BE591473F9A800DF08A8AC8690190; // 0x2d0 (0x4)
	struct TEnumAsByte<ETimelineDirection> Timeline0DirectionCD3BE591473F9A800DF08A8AC8690190; // 0x2d4 (0x1)
	unsigned char unreflected_2d5[0x3]; // 0x2d5 (0x3) 
	class UTimelineComponent* Timeline0; // 0x2d8 (0x8)
	double WavePeriod; // 0x2e0 (0x8)
	double ForceDuration; // 0x2e8 (0x8)
	double Radius; // 0x2f0 (0x8)
	double Magnitude; // 0x2f8 (0x8)
	double PlayRate; // 0x300 (0x8)
	double Scale; // 0x308 (0x8)
	double ImpactTime; // 0x310 (0x8)
	double Period; // 0x318 (0x8)
	double WaveLength; // 0x320 (0x8)
	double TimeDecay; // 0x328 (0x8)
	struct TEnumAsByte<EFieldFalloffType> FalloffType; // 0x330 (0x1)
	unsigned char unreflected_331[0x7]; // 0x331 (0x7) 
	double Expansion; // 0x338 (0x8)
	double ImpactRadius; // 0x340 (0x8)
	double Strength; // 0x348 (0x8)

	/* Functions */

	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.NewFunction_0 (Has no native function)
	struct FTransform NewFunction0(double& Roll, double& Scale); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.Timeline_0__FinishedFunc (Has no native function)
	void Timeline0FinishedFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.Timeline_0__UpdateFunc (Has no native function)
	void Timeline0UpdateFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Effects/Niagara/Blueprints/PhsyicsFields/FN_RadialForce.FN_RadialForce_C.ExecuteUbergraph_FN_RadialForce (Has no native function)
	void ExecuteUbergraphFNRadialForce(int& EntryPoint, struct FVector& CallFuncK2GetComponentLocationReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue1, double& CallFuncGetGameTimeInSecondsReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue2, class UWaveScalar*& CallFuncSetWaveScalarReturnValue, class UWaveScalar*& CallFuncSetWaveScalarReturnValue1, struct FVector& CallFuncK2GetComponentLocationReturnValue3, class URadialFalloff*& CallFuncSetRadialFalloffReturnValue, class UOperatorField*& CallFuncSetOperatorFieldReturnValue, class URadialVector*& CallFuncSetRadialVectorReturnValue, class UOperatorField*& CallFuncSetOperatorFieldReturnValue1, double& CallFuncFMaxReturnValue, class UOperatorField*& CallFuncSetOperatorFieldReturnValue2, double& CallFuncDivideDoubleDoubleReturnValue, double& CallFuncMultiplyByPiReturnValue, double& CallFuncDivideDoubleDoubleReturnValue1, float& CallFuncSetWaveScalarPeriodImplicitCast, float& CallFuncSetWaveScalarTimeImplicitCast, float& CallFuncSetWaveScalarTimeImplicitCast1, float& CallFuncSetWaveScalarPeriodImplicitCast1, float& CallFuncSetWaveScalarWavelengthImplicitCast, float& CallFuncSetRadialFalloffRadiusImplicitCast, float& CallFuncSetRadialVectorMagnitudeImplicitCast, float& CallFuncSetPlayRateNewRateImplicitCast); // (Final | 0x00008000)
};

