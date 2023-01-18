// ScriptStruct /Script/ModelProto.TensorProto
// Size: 0xd0
struct FTensorProto
{
	struct TArray<int64_t> Dimensions; // 0x0 (0x10)
	enum ETensorProtoDataType DataType; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FTensorProtoSegment Segment; // 0x18 (0x10)
	struct TArray<float> FloatData; // 0x28 (0x10)
	struct TArray<int> Int32Data; // 0x38 (0x10)
	struct TArray<struct FString> StringData; // 0x48 (0x10)
	struct TArray<int64_t> Int64Data; // 0x58 (0x10)
	struct FString Name; // 0x68 (0x10)
	struct FString DocString; // 0x78 (0x10)
	struct TArray<unsigned char> RawData; // 0x88 (0x10)
	struct TArray<struct FStringStringEntryProto> ExternalData; // 0x98 (0x10)
	enum ETensorProtoDataLocation DataLocation; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct TArray<double> DoubleData; // 0xb0 (0x10)
	struct TArray<uint64_t> UInt64Data; // 0xc0 (0x10)
};

