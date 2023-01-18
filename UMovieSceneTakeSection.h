// Class /Script/TakeMovieScene.MovieSceneTakeSection
// Size: 0x710
class UMovieSceneTakeSection : public UMovieSceneSection
{
	struct FMovieSceneIntegerChannel HoursCurve; // 0xf0 (0x100)
	struct FMovieSceneIntegerChannel MinutesCurve; // 0x1f0 (0x100)
	struct FMovieSceneIntegerChannel SecondsCurve; // 0x2f0 (0x100)
	struct FMovieSceneIntegerChannel FramesCurve; // 0x3f0 (0x100)
	struct FMovieSceneFloatChannel SubFramesCurve; // 0x4f0 (0x110)
	struct FMovieSceneStringChannel Slate; // 0x600 (0x110)
};

