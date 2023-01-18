// ScriptStruct /Script/Engine.RepMovement
// Size: 0x70
struct FRepMovement
{
	struct FVector LinearVelocity; // 0x0 (0x18)
	struct FVector AngularVelocity; // 0x18 (0x18)
	struct FVector Location; // 0x30 (0x18)
	struct FRotator Rotation; // 0x48 (0x18)
	unsigned char bSimulatedPhysicSleep; // 0x60 (0x1)
	unsigned char bRepPhysics; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	int ServerFrame; // 0x64 (0x4)
	int ServerPhysicsHandle; // 0x68 (0x4)
	enum EVectorQuantization LocationQuantizationLevel; // 0x6c (0x1)
	enum EVectorQuantization VelocityQuantizationLevel; // 0x6d (0x1)
	enum ERotatorQuantization RotationQuantizationLevel; // 0x6e (0x1)
	unsigned char padding_6f[0x1]; // 0x6f (0x1)
};

