// Class /Script/ControlRig.ControlRigShapeLibrary
// Size: 0x150
class UControlRigShapeLibrary : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct FControlRigShapeDefinition DefaultShape; // 0x30 (0xa0)
	struct TWeakObjectPtr<class UMaterial> DefaultMaterial; // 0xd0 (0x28)
	struct TWeakObjectPtr<class UMaterial> XRayMaterial; // 0xf8 (0x28)
	struct FName MaterialColorParameter; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct TArray<struct FControlRigShapeDefinition> Shapes; // 0x128 (0x10)
	unsigned char padding_138[0x18]; // 0x138 (0x18)
};

