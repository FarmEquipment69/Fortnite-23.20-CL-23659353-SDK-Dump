// Class /Script/NevadaRuntime.FortPlayerAnimInstance_NevadaDriver
// Size: 0x1dd0
class UFortPlayerAnimInstance_NevadaDriver : public UFortPlayerAnimInstance_OctopusDriver
{
	class AFortNevadaVehicle* NevadaVehicle; // 0x1c50 (0x8)
	float AnimLeftRight; // 0x1c58 (0x4)
	float AnimForwardBackward; // 0x1c5c (0x4)
	struct FVector RootAttachmentLoc; // 0x1c60 (0x18)
	struct FRotator RootAttachmentRot; // 0x1c78 (0x18)
	int BoostCount; // 0x1c90 (0x4)
	int PreviousBoostCount; // 0x1c94 (0x4)
	bool bIsBoostingAgain; // 0x1c98 (0x1)
	bool bIsMoving; // 0x1c99 (0x1)
	unsigned char unreflected_1c9a[0x2]; // 0x1c9a (0x2) 
	float MinVehicleVelocityToBeMoving; // 0x1c9c (0x4)
	struct FName DriverSocketName; // 0x1ca0 (0x4)
	struct FName RightHandAttachmentSocketName; // 0x1ca4 (0x4)
	struct FName LeftHandAttachmentSocketName; // 0x1ca8 (0x4)
	struct FName RightFootAttachmentSocketName; // 0x1cac (0x4)
	struct FName LeftFootAttachementSocketName; // 0x1cb0 (0x4)
	unsigned char unreflected_1cb4[0x4]; // 0x1cb4 (0x4) 
	struct FRotator RightHandRotationOffset; // 0x1cb8 (0x18)
	struct FRotator LeftHandRotationOffset; // 0x1cd0 (0x18)
	struct FRotator RightFootRotationOffset; // 0x1ce8 (0x18)
	struct FRotator LeftFootRotationOffset; // 0x1d00 (0x18)
	struct FVector RootAttachmentOffset; // 0x1d18 (0x18)
	unsigned char padding_1d30[0xa0]; // 0x1d30 (0xa0)
};

