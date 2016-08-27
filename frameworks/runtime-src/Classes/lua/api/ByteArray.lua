
--------------------------------
-- @module ByteArray
-- @extend Ref
-- @parent_module jt

--------------------------------
-- 
-- @function [parent=#ByteArray] readUnsignedShort 
-- @param self
-- @return unsigned short#unsigned short ret (return value: unsigned short)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeString 
-- @param self
-- @param #string value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeShort 
-- @param self
-- @param #short value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readBool 
-- @param self
-- @return bool#bool ret (return value: bool)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readByte 
-- @param self
-- @return char#char ret (return value: char)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeUnsignedInt 
-- @param self
-- @param #unsigned int value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readLongLong 
-- @param self
-- @return long long#long long ret (return value: long long)
        
--------------------------------
-- 从字节流中读取一个无符号的 32 位整数。<br>
-- 32位系统下int与long同4字节
-- @function [parent=#ByteArray] readUnsignedInt 
-- @param self
-- @return unsigned int#unsigned int ret (return value: unsigned int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] getLength 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeBool 
-- @param self
-- @param #bool value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readShort 
-- @param self
-- @return short#short ret (return value: short)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readInt 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readUnsignedByte 
-- @param self
-- @return unsigned char#unsigned char ret (return value: unsigned char)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeByte 
-- @param self
-- @param #char value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] setEndian 
-- @param self
-- @param #int n
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] setPosition 
-- @param self
-- @param #int _pos
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] getBuffer 
-- @param self
-- @return char#char ret (return value: char)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] getEndian 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] readString 
-- @param self
-- @param #int len
-- @return string#string ret (return value: string)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] getPosition 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeLongLong 
-- @param self
-- @param #long long value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] clear 
-- @param self
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] getBytesAvailable 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeUnsignedChar 
-- @param self
-- @param #unsigned char value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeInt 
-- @param self
-- @param #int value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] writeUnsignedShort 
-- @param self
-- @param #unsigned short value
-- @return ByteArray#ByteArray self (return value: ByteArray)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] checkCPUEndian 
-- @param self
-- @return int#int ret (return value: int)
        
--------------------------------
-- 
-- @function [parent=#ByteArray] create 
-- @param self
-- @param #int len
-- @param #int endian
-- @return ByteArray#ByteArray ret (return value: ByteArray)
        
return nil
