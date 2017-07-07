namespace interfaces {
    class renderable {
    public:
        virtual void render() = 0;
    };

    class sendable {
    public:
        virtual void send() = 0;
        virtual void receive() = 0;
    };

    class compressable {
    public:
        virtual void compress() = 0;
        virtual void decompress() = 0;
    };
}
