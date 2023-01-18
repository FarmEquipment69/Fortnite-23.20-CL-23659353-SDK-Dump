// ScriptStruct /Script/FortniteGame.FortAnimInput_DBNOCarried
// Size: 0xf8
struct FFortAnimInput_DBNOCarried
{
	struct FCachedAnimStateData DropStateData; // 0x0 (0x14)
	struct FFloatSpringState CarrierYawSpringState; // 0x14 (0xc)
	struct FFloatSpringState CarrierSpinePitchSpringState; // 0x20 (0xc)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UAnimMontage* CarrierDropMontage; // 0x30 (0x8)
	class UAnimMontage* CarrierPickupMontage; // 0x38 (0x8)
	class AFortPlayerPawn* CarrierPawn; // 0x40 (0x8)
	class UFortPlayerAnimInstance* CarrierAnimBP; // 0x48 (0x8)
	class UAnimMontage* CarrierInterrogationMontage; // 0x50 (0x8)
	struct FVector LHandIKLocation; // 0x58 (0x18)
	struct FRotator LHandIKRotation; // 0x70 (0x18)
	struct FVector TempAttachLocation; // 0x88 (0x18)
	struct FRotator TempAttachRotation; // 0xa0 (0x18)
	float SubAnimPhysicsWeight; // 0xb8 (0x4)
	float DropMontagePosition; // 0xbc (0x4)
	float PickupMontagePosition; // 0xc0 (0x4)
	float InterrogationMontagePosition; // 0xc4 (0x4)
	float PickupToIdleTransitionPosition; // 0xc8 (0x4)
	float CarrierPawnVelocityZ; // 0xcc (0x4)
	float CarrierYawDeltaSmoothed; // 0xd0 (0x4)
	float CarriedJogNAnimPosition; // 0xd4 (0x4)
	float CarriedJogSAnimPosition; // 0xd8 (0x4)
	float CarriedCrouchNAnimPosition; // 0xdc (0x4)
	float CarriedCrouchSAnimPosition; // 0xe0 (0x4)
	float CarriedSprintAnimPosition; // 0xe4 (0x4)
	float CarriedCrouchSprintAnimPosition; // 0xe8 (0x4)
	float CarrierSpinePitch; // 0xec (0x4)
	float DropStateWeight; // 0xf0 (0x4)
	unsigned char bBeingCarried; // 0xf4 (0x1)
	unsigned char bIsBeingPickedUp; // 0xf4 (0x1)
	unsigned char bIsBeingDropped; // 0xf4 (0x1)
	unsigned char bCarrierIsCrouching; // 0xf4 (0x1)
	unsigned char bCarrierIsMovingBackward; // 0xf4 (0x1)
	unsigned char bCarrierHasSyncMarkers; // 0xf4 (0x1)
	unsigned char bTransitionFromPickupToIdle; // 0xf4 (0x1)
	unsigned char bTransitionFromIdleToJogging; // 0xf4 (0x1)
	unsigned char bTransitionFromJoggingToSprinting; // 0xf5 (0x1)
	unsigned char bTransitionFromInAirToLanding; // 0xf5 (0x1)
	unsigned char bJackalPlayJumpTrickVertical; // 0xf5 (0x1)
	unsigned char padding_f6[0x2]; // 0xf6 (0x2)
};

