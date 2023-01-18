// Class /Script/Constraints.ConstraintsManager
// Size: 0x48
class UConstraintsManager : public UObject
{
	struct FMulticastSparseDelegate OnConstraintAddedBP; // 0x28 (0x1)
	struct FMulticastSparseDelegate OnConstraintRemovedBP; // 0x29 (0x1)
	unsigned char unreflected_2a[0xe]; // 0x2a (0xe) 
	struct TArray<class UTickableConstraint*> Constraints; // 0x38 (0x10)
};

