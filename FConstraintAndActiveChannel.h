// ScriptStruct /Script/Constraints.ConstraintAndActiveChannel
// Size: 0x130
struct FConstraintAndActiveChannel
{
	struct TWeakObjectPtr<class UTickableConstraint> Constraint; // 0x0 (0x28)
	struct FMovieSceneConstraintChannel ActiveChannel; // 0x28 (0x100)
	class UTickableConstraint* ConstraintCopyToSpawn; // 0x128 (0x8)
};

