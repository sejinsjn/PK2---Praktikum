namespace IteratorN{
    public abstract class Iterator<T>{
        public abstract bool HasNext();
        public abstract T Next();
    }
}