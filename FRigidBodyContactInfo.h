// ScriptStruct /Script/Engine.RigidBodyContactInfo
// Size: 0x48
struct FRigidBodyContactInfo
{
	struct FVector ContactPosition; // 0x0 (0x18)
	struct FVector ContactNormal; // 0x18 (0x18)
	float ContactPenetration; // 0x30 (0x4)
	bool bContactProbe; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	class UPhysicalMaterial* PhysMaterial[0x2]; // 0x38 (0x8) (ARRAY) 
};

