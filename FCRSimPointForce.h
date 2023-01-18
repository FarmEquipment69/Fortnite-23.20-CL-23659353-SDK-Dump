// ScriptStruct /Script/ControlRig.CRSimPointForce
// Size: 0x28
struct FCRSimPointForce
{
	enum ECRSimPointForceType ForceType; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector Vector; // 0x8 (0x18)
	float Coefficient; // 0x20 (0x4)
	bool bNormalize; // 0x24 (0x1)
	unsigned char padding_25[0x3]; // 0x25 (0x3)
};

