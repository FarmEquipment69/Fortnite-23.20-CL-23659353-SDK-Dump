// ScriptStruct /Script/GeometryCacheTracks.MovieSceneGeometryCacheParams
// Size: 0x40
struct FMovieSceneGeometryCacheParams
{
	class UGeometryCache* GeometryCacheAsset; // 0x0 (0x8)
	struct FFrameNumber FirstLoopStartFrameOffset; // 0x8 (0x4)
	struct FFrameNumber StartFrameOffset; // 0xc (0x4)
	struct FFrameNumber EndFrameOffset; // 0x10 (0x4)
	float PlayRate; // 0x14 (0x4)
	unsigned char bReverse; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float StartOffset; // 0x1c (0x4)
	float EndOffset; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FSoftObjectPath GeometryCache; // 0x28 (0x18)
};

