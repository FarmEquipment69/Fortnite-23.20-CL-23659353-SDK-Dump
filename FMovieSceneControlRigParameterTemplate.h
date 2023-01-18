// ScriptStruct /Script/ControlRig.MovieSceneControlRigParameterTemplate
// Size: 0xc0
struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate
{
	struct TArray<struct FEnumParameterNameAndCurve> Enums; // 0x80 (0x10)
	struct TArray<struct FIntegerParameterNameAndCurve> Integers; // 0x90 (0x10)
	struct TArray<struct FSpaceControlNameAndChannel> Spaces; // 0xa0 (0x10)
	struct TArray<struct FConstraintAndActiveChannel> Constraints; // 0xb0 (0x10)
};

