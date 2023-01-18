// ScriptStruct /Script/ControlRig.ControlRigComponentMappedElement
// Size: 0xc0
struct FControlRigComponentMappedElement
{
	struct FComponentReference ComponentReference; // 0x0 (0x28)
	int TransformIndex; // 0x28 (0x4)
	struct FName TransformName; // 0x2c (0x4)
	enum ERigElementType ElementType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName ElementName; // 0x34 (0x4)
	enum EControlRigComponentMapDirection Direction; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FTransform Offset; // 0x40 (0x60)
	float Weight; // 0xa0 (0x4)
	enum EControlRigComponentSpace Space; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	class USceneComponent* SceneComponent; // 0xa8 (0x8)
	int ElementIndex; // 0xb0 (0x4)
	int SubIndex; // 0xb4 (0x4)
	unsigned char padding_b8[0x8]; // 0xb8 (0x8)
};

