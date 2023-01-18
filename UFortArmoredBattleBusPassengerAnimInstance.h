// Class /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance
// Size: 0x1ae0
class UFortArmoredBattleBusPassengerAnimInstance : public UFortPlayerAnimInstance
{
	struct FRotator PreviousVehicleRotator; // 0x1a18 (0x18)
	float SmoothedVehicleYawRate; // 0x1a30 (0x4)
	int PawnSeat; // 0x1a34 (0x4)
	bool bIsFrontTurretPassenger; // 0x1a38 (0x1)
	bool bIsRearTurretPassenger; // 0x1a39 (0x1)
	unsigned char unreflected_1a3a[0x2]; // 0x1a3a (0x2) 
	float Speed; // 0x1a3c (0x4)
	float YawDelta; // 0x1a40 (0x4)
	float TurretYaw; // 0x1a44 (0x4)
	float TurretPitch; // 0x1a48 (0x4)
	unsigned char unreflected_1a4c[0x4]; // 0x1a4c (0x4) 
	struct FRotator TurretYawRotator; // 0x1a50 (0x18)
	float SlopeRollDegreeAngle; // 0x1a68 (0x4)
	float SlopePitchDegreeAngle; // 0x1a6c (0x4)
	struct FVector HandAttachL; // 0x1a70 (0x18)
	struct FVector HandAttachR; // 0x1a88 (0x18)
	struct TEnumAsByte<ERelativeTransformSpace> TransformSpace; // 0x1aa0 (0x1)
	unsigned char unreflected_1aa1[0x3]; // 0x1aa1 (0x3) 
	float UpdateYawDeltaSmoothedLerpRate; // 0x1aa4 (0x4)
	int TurretPassengerFront; // 0x1aa8 (0x4)
	int TurretPassengerRear; // 0x1aac (0x4)
	struct FName FrontFootBoneName; // 0x1ab0 (0x4)
	struct FName RearFootBoneName; // 0x1ab4 (0x4)
	struct FName GunHandAttachBoneNameFrontLeft; // 0x1ab8 (0x4)
	struct FName GunHandAttachBoneNameRearLeft; // 0x1abc (0x4)
	struct FName GunHandAttachBoneNameFrontRight; // 0x1ac0 (0x4)
	struct FName GunHandAttachBoneNameRearRight; // 0x1ac4 (0x4)
	struct FName PassengerBoneNameFront; // 0x1ac8 (0x4)
	struct FName PassengerBoneNameRear; // 0x1acc (0x4)
	float TurretPitchDegMin; // 0x1ad0 (0x4)
	float TurretPitchDegMax; // 0x1ad4 (0x4)
	float LocalPlayerTurretPitchEaseRate; // 0x1ad8 (0x4)
	unsigned char padding_1adc[0x4]; // 0x1adc (0x4)

	/* Functions */

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateYawDeltaSmoothed (Underlying native function: UpdateYawDeltaSmoothed 0x725a7b8)
	void UpdateYawDeltaSmoothed(class AFortAthenaVehicle*& VehicleActor, struct FName& SocketName, struct FRotator& NewRotation, float& SmoothedYawValue); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateSmoothedVehicleYawRate (Underlying native function: UpdateSmoothedVehicleYawRate 0x725a390)
	void UpdateSmoothedVehicleYawRate(class AFortAthenaVehicle*& VehicleActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UpdateHandPositionsSlopeValues (Underlying native function: UpdateHandPositionsSlopeValues 0x725a310)
	void UpdateHandPositionsSlopeValues(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.UnrotateHandAttachLocation (Underlying native function: UnrotateHandAttachLocation 0x725a1b8)
	struct FVector UnrotateHandAttachLocation(struct FVector& HandLocation, struct FVector& FootLocation, struct FRotator& FootRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetPassengerTransform (Underlying native function: GetPassengerTransform 0x7259ee0)
	struct FTransform GetPassengerTransform(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetHandAttachLocation (Underlying native function: GetHandAttachLocation 0x7259dd0)
	struct FVector GetHandAttachLocation(class USkeletalMeshComponent*& BusMeshComponent, struct FName& FrontHandAttachBoneName, struct FName& RearHandAttachBoneName); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GetFootAttachTransform (Underlying native function: GetFootAttachTransform 0x7259cf4)
	struct FTransform GetFootAttachTransform(class USkeletalMeshComponent*& BusMeshComponent); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/ArmoredBattleBusRuntime.FortArmoredBattleBusPassengerAnimInstance.GenerateCharacterPitchAndYawForSlopedTerrain (Underlying native function: GenerateCharacterPitchAndYawForSlopedTerrain 0x7259b88)
	void GenerateCharacterPitchAndYawForSlopedTerrain(class AFortAthenaVehicle*& VehicleActor, float& TurretYaw, float& TurretPitch, struct FRotator& PawnYawRotator); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

