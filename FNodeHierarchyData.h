// ScriptStruct /Script/AnimationCore.NodeHierarchyData
// Size: 0x70
struct FNodeHierarchyData
{
	struct TArray<struct FNodeObject*> Nodes; // 0x0 (0x10)
	struct TArray<struct FTransform> Transforms; // 0x10 (0x10)
	struct TMap<struct FName, int> NodeNameToIndexMapping; // 0x20 (0x50)
};

