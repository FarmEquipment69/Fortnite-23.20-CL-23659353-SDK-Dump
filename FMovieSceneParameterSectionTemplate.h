// ScriptStruct /Script/MovieSceneTracks.MovieSceneParameterSectionTemplate
// Size: 0x80
struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate
{
	struct TArray<struct FScalarParameterNameAndCurve> Scalars; // 0x20 (0x10)
	struct TArray<struct FBoolParameterNameAndCurve> Bools; // 0x30 (0x10)
	struct TArray<struct FVector2DParameterNameAndCurves> Vector2Ds; // 0x40 (0x10)
	struct TArray<struct FVectorParameterNameAndCurves> Vectors; // 0x50 (0x10)
	struct TArray<struct FColorParameterNameAndCurves> Colors; // 0x60 (0x10)
	struct TArray<struct FTransformParameterNameAndCurves> Transforms; // 0x70 (0x10)
};

