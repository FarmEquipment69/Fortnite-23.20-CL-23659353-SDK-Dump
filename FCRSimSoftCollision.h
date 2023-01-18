// ScriptStruct /Script/ControlRig.CRSimSoftCollision
// Size: 0x80
struct FCRSimSoftCollision
{
	struct FTransform Transform; // 0x0 (0x60)
	enum ECRSimSoftCollisionType ShapeType; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float MinimumDistance; // 0x64 (0x4)
	float MaximumDistance; // 0x68 (0x4)
	enum EControlRigAnimEasingType FalloffType; // 0x6c (0x1)
	unsigned char unreflected_6d[0x3]; // 0x6d (0x3) 
	float Coefficient; // 0x70 (0x4)
	bool bInverted; // 0x74 (0x1)
	unsigned char padding_75[0xb]; // 0x75 (0xb)
};

