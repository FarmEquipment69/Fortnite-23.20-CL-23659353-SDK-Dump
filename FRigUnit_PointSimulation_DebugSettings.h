// ScriptStruct /Script/ControlRig.RigUnit_PointSimulation_DebugSettings
// Size: 0x80
struct FRigUnit_PointSimulation_DebugSettings
{
	bool bEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float Scale; // 0x4 (0x4)
	float CollisionScale; // 0x8 (0x4)
	bool bDrawPointsAsSpheres; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FLinearColor Color; // 0x10 (0x10)
	struct FTransform WorldOffset; // 0x20 (0x60)
};

