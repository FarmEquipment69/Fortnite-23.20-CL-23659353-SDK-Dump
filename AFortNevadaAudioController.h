// Class /Script/NevadaRuntime.FortNevadaAudioController
// Size: 0x350
class AFortNevadaAudioController : public AActor
{
	struct FVector2D SpeedRangeMap; // 0x288 (0x10)
	struct FVector2D TurningRangeMap; // 0x298 (0x10)
	struct FVector2D AcceleratingRangeMap; // 0x2a8 (0x10)
	struct FVector2D BrakingRangeMap; // 0x2b8 (0x10)
	struct FVector2D PassByRangeMap; // 0x2c8 (0x10)
	struct FVector2D LFORangeMap; // 0x2d8 (0x10)
	class AFortNevadaVehicle* Vehicle; // 0x2e8 (0x8)
	class UFortLayeredAudioComponent* LayeredAudioComponent; // 0x2f0 (0x8)
	float SpeedParamValue; // 0x2f8 (0x4)
	float SpeedParamValuePrev; // 0x2fc (0x4)
	float AcceleratingParamValue; // 0x300 (0x4)
	float BrakingParamValue; // 0x304 (0x4)
	struct FVector ForwardVector; // 0x308 (0x18)
	struct FVector ForwardVectorPrev; // 0x320 (0x18)
	float TurningParamValue; // 0x338 (0x4)
	float PassByParamValue; // 0x33c (0x4)
	float LocallyControlledParamValue; // 0x340 (0x4)
	float LFOParamValue; // 0x344 (0x4)
	unsigned char padding_348[0x8]; // 0x348 (0x8)

	/* Functions */

	// Function /Script/NevadaRuntime.FortNevadaAudioController.Update (Underlying native function: Update 0x73adc8c)
	void Update(); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaAudioController.Init (Underlying native function: Init 0x73ad52c)
	void Init(class AFortNevadaVehicle*& InVehicle); // (Final | Native | Public)

	// Function /Script/NevadaRuntime.FortNevadaAudioController.GetVehicleActor (Underlying native function: GetVehicleActor 0x73ad514)
	class AFortNevadaVehicle* GetVehicleActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/NevadaRuntime.FortNevadaAudioController.CacheReferences (Underlying native function: CacheReferences 0x73ad228)
	void CacheReferences(class UFortLayeredAudioComponent*& InLayeredAudioComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Update (Has no native function)
	void BPUpdate(); // (Event | Public | BlueprintEvent)

	// Function /Script/NevadaRuntime.FortNevadaAudioController.BP_Init (Has no native function)
	void BPInit(); // (Event | Public | BlueprintEvent)
};

