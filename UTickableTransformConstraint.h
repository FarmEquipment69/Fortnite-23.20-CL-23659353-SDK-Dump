// Class /Script/Constraints.TickableTransformConstraint
// Size: 0x90
class UTickableTransformConstraint : public UTickableConstraint
{
	class UTransformableHandle* ParentTRSHandle; // 0x70 (0x8)
	class UTransformableHandle* ChildTRSHandle; // 0x78 (0x8)
	bool bMaintainOffset; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	float Weight; // 0x84 (0x4)
	bool bDynamicOffset; // 0x88 (0x1)
	enum ETransformConstraintType Type; // 0x89 (0x1)
	unsigned char padding_8a[0x6]; // 0x8a (0x6)
};

