// Class /Script/FortniteGame.FortVehicleAnimInstance
// Size: 0x5f0
class UFortVehicleAnimInstance : public UFortBaseAnimInstance
{
	class AFortAthenaSKVehicle* Vehicle; // 0x430 (0x8)
	struct FVector AxlePositionF; // 0x438 (0x18)
	struct FVector AxlePositionB; // 0x450 (0x18)
	struct FRotator AxleRotationF; // 0x468 (0x18)
	struct FRotator AxleRotationB; // 0x480 (0x18)
	struct FVector WheelPositionFR; // 0x498 (0x18)
	struct FVector WheelPositionFL; // 0x4b0 (0x18)
	struct FVector WheelPositionBR; // 0x4c8 (0x18)
	struct FVector WheelPositionBL; // 0x4e0 (0x18)
	struct FRotator WheelSpinFR; // 0x4f8 (0x18)
	struct FRotator WheelSpinFL; // 0x510 (0x18)
	struct FRotator WheelSpinBR; // 0x528 (0x18)
	struct FRotator WheelSpinBL; // 0x540 (0x18)
	struct FRotator DriveShaftSpin; // 0x558 (0x18)
	struct FRotator WheelRotationFR; // 0x570 (0x18)
	struct FRotator WheelRotationFL; // 0x588 (0x18)
	struct FRotator WheelRotationBR; // 0x5a0 (0x18)
	struct FRotator WheelRotationBL; // 0x5b8 (0x18)
	struct FRotator SteeringRotation; // 0x5d0 (0x18)
	enum EFortValetVehicleType VehicleType; // 0x5e8 (0x1)
	bool bHasDriver; // 0x5e9 (0x1)
	unsigned char padding_5ea[0x6]; // 0x5ea (0x6)
};

