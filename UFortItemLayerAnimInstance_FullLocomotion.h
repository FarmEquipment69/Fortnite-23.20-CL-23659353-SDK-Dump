// Class /Script/FortniteGame.FortItemLayerAnimInstance_FullLocomotion
// Size: 0x500
class UFortItemLayerAnimInstance_FullLocomotion : public UFortItemLayerAnimInstance
{
	struct FFortAnimInput_SpeedWarping SpeedWarping; // 0x460 (0x30)
	struct FFortAnimInput_SpeedWarping JogStartSpeedWarping; // 0x490 (0x30)
	struct FVector ActorSpaceVelocityDirPreTurn; // 0x4c0 (0x18)
	float LocalVelocityYawAngle; // 0x4d8 (0x4)
	float LocalVelocityYawAngleMinusMeleeTwist; // 0x4dc (0x4)
	float LocalVelocityYawAngleMinusJogBlendSpaceRotation; // 0x4e0 (0x4)
	float StartAnimDeltaAngleNorth; // 0x4e4 (0x4)
	float StartAnimDeltaAngleEast; // 0x4e8 (0x4)
	float StartAnimDeltaAngleSouth; // 0x4ec (0x4)
	float StartAnimDeltaAngleWest; // 0x4f0 (0x4)
	float SpeedAdjustedPlayrate; // 0x4f4 (0x4)
	enum EFortCardinalDirection LocomotionCardinalDirection; // 0x4f8 (0x1)
	enum EFortCardinalDirection StopCardinalDirection; // 0x4f9 (0x1)
	enum EFortCardinalDirection PrePivotCardinalDirection; // 0x4fa (0x1)
	enum EFortCardinalDirection PostPivotCardinalDirection; // 0x4fb (0x1)
	bool bIsSprinting; // 0x4fc (0x1)
	unsigned char padding_4fd[0x3]; // 0x4fd (0x3)
};

