// ScriptStruct /Script/ImageWriteQueue.ImageWriteOptions
// Size: 0x60
struct FImageWriteOptions
{
	enum EDesiredImageFormat Format; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FDelegate OnComplete; // 0x4 (0xc)
	int CompressionQuality; // 0x10 (0x4)
	bool bOverwriteFile; // 0x14 (0x1)
	bool bAsync; // 0x15 (0x1)
	unsigned char padding_16[0x4a]; // 0x16 (0x4a)
};

