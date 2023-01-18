// ScriptStruct /Script/ControlRig.ControlRigShapeDefinition
// Size: 0xa0
struct FControlRigShapeDefinition
{
	struct FName ShapeName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UStaticMesh> StaticMesh; // 0x8 (0x28)
	struct FTransform Transform; // 0x30 (0x60)
	unsigned char padding_90[0x10]; // 0x90 (0x10)
};

