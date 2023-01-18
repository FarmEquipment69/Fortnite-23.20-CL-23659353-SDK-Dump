// ScriptStruct /Script/LiveLinkMovieScene.LiveLinkPropertyData
// Size: 0x58
struct FLiveLinkPropertyData
{
	struct FName PropertyName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FMovieSceneFloatChannel> FloatChannel; // 0x8 (0x10)
	struct TArray<struct FMovieSceneStringChannel> StringChannel; // 0x18 (0x10)
	struct TArray<struct FMovieSceneIntegerChannel> IntegerChannel; // 0x28 (0x10)
	struct TArray<struct FMovieSceneBoolChannel> BoolChannel; // 0x38 (0x10)
	struct TArray<struct FMovieSceneByteChannel> ByteChannel; // 0x48 (0x10)
};

