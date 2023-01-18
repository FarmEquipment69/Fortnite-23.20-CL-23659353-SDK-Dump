// ScriptStruct /Script/Engine.RigidBodyState
// Size: 0x80
struct FRigidBodyState
{
	struct FVector_NetQuantize100 Position; // 0x0 (0x18)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FQuat Quaternion; // 0x20 (0x20)
	struct FVector_NetQuantize100 LinVel; // 0x40 (0x18)
	struct FVector_NetQuantize100 AngVel; // 0x58 (0x18)
	unsigned char Flags; // 0x70 (0x1)
	unsigned char padding_71[0xf]; // 0x71 (0xf)
};

