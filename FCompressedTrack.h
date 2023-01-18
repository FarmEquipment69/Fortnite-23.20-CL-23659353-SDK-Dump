// ScriptStruct /Script/Engine.CompressedTrack
// Size: 0x38
struct FCompressedTrack
{
	struct TArray<unsigned char> ByteStream; // 0x0 (0x10)
	struct TArray<float> Times; // 0x10 (0x10)
	float Mins[0x3]; // 0x20 (0x4) (ARRAY) 
	float Ranges[0x3]; // 0x2c (0x4) (ARRAY) 
};

