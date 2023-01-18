// ScriptStruct /Script/BuildPatchServices.ChunkInfoData
// Size: 0x40
struct FChunkInfoData
{
	struct FGuid Guid; // 0x0 (0x10)
	uint64_t Hash; // 0x10 (0x8)
	struct FSHAHashData ShaHash; // 0x18 (0x14)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	int64_t FileSize; // 0x30 (0x8)
	unsigned char GroupNumber; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

