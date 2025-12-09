// Exemple of partition. It cannot be imported by client directly, it must be exported by the parent module, if needed.

export module Car.Type:Partitions;

export constexpr int partitionFromCarType = 5;
