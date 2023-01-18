// Class /Script/Engine.PhysicsVolume
// Size: 0x2d0
class APhysicsVolume : public AVolume
{
	float TerminalVelocity; // 0x2c0 (0x4)
	int Priority; // 0x2c4 (0x4)
	float FluidFriction; // 0x2c8 (0x4)
	unsigned char bWaterVolume; // 0x2cc (0x1)
	unsigned char bPhysicsOnContact; // 0x2cc (0x1)
	unsigned char padding_2cd[0x3]; // 0x2cd (0x3)
};

