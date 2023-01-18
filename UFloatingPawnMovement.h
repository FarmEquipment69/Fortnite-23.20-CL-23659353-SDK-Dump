// Class /Script/Engine.FloatingPawnMovement
// Size: 0x168
class UFloatingPawnMovement : public UPawnMovementComponent
{
	float MaxSpeed; // 0x150 (0x4)
	float Acceleration; // 0x154 (0x4)
	float Deceleration; // 0x158 (0x4)
	float TurningBoost; // 0x15c (0x4)
	unsigned char bPositionCorrected; // 0x160 (0x1)
	unsigned char padding_161[0x7]; // 0x161 (0x7)
};

