// ScriptStruct /Script/FortniteGame.RecordBucketMap
// Size: 0x60
struct FRecordBucketMap
{
	struct TMap<struct FIntPoint*, struct FRecordBucket> PositionToRecord; // 0x0 (0x50)
	struct TArray<int> DuplicateRecords; // 0x50 (0x10)
};

