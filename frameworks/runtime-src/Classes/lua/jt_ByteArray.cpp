#include "jt_ByteArray.hpp"
#include "ByteArray.h"
#include "tolua_fix.h"
#include "LuaBasicConversions.h"



int lua_jt_ByteArray_ByteArray_readUnsignedShort(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readUnsignedShort'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readUnsignedShort'", nullptr);
            return 0;
        }
        unsigned short ret = cobj->readUnsignedShort();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readUnsignedShort",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readUnsignedShort'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeString(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        std::string arg0;

        ok &= luaval_to_std_string(tolua_S, 2,&arg0, "ByteArray:writeString");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeString'", nullptr);
            return 0;
        }
        cobj->writeString(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeString",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeString'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeShort(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeShort'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int32_t arg0;

        ok &= luaval_to_int32(tolua_S, 2,&arg0, "ByteArray:writeShort");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeShort'", nullptr);
            return 0;
        }
        cobj->writeShort(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeShort",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeShort'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readBool(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readBool'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readBool'", nullptr);
            return 0;
        }
        bool ret = cobj->readBool();
        tolua_pushboolean(tolua_S,(bool)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readBool",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readBool'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readByte(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readByte'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readByte'", nullptr);
            return 0;
        }
        int32_t ret = cobj->readByte();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readByte",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readByte'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeUnsignedInt(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeUnsignedInt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned int arg0;

        ok &= luaval_to_uint32(tolua_S, 2,&arg0, "ByteArray:writeUnsignedInt");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeUnsignedInt'", nullptr);
            return 0;
        }
        cobj->writeUnsignedInt(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeUnsignedInt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeUnsignedInt'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readLongLong(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readLongLong'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readLongLong'", nullptr);
            return 0;
        }
        long long ret = cobj->readLongLong();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readLongLong",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readLongLong'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readUnsignedInt(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readUnsignedInt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readUnsignedInt'", nullptr);
            return 0;
        }
        unsigned int ret = cobj->readUnsignedInt();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readUnsignedInt",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readUnsignedInt'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_getLength(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_getLength'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_getLength'", nullptr);
            return 0;
        }
        int ret = cobj->getLength();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:getLength",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_getLength'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeBool(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeBool'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        bool arg0;

        ok &= luaval_to_boolean(tolua_S, 2,&arg0, "ByteArray:writeBool");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeBool'", nullptr);
            return 0;
        }
        cobj->writeBool(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeBool",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeBool'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readShort(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readShort'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readShort'", nullptr);
            return 0;
        }
        int32_t ret = cobj->readShort();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readShort",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readShort'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readInt(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readInt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readInt'", nullptr);
            return 0;
        }
        int ret = cobj->readInt();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readInt",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readInt'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readUnsignedByte(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readUnsignedByte'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readUnsignedByte'", nullptr);
            return 0;
        }
        uint16_t ret = cobj->readUnsignedByte();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readUnsignedByte",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readUnsignedByte'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeByte(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeByte'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int32_t arg0;

        ok &= luaval_to_int32(tolua_S, 2,&arg0, "ByteArray:writeByte");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeByte'", nullptr);
            return 0;
        }
        cobj->writeByte(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeByte",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeByte'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_setEndian(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_setEndian'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:setEndian");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_setEndian'", nullptr);
            return 0;
        }
        cobj->setEndian(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:setEndian",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_setEndian'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_setPosition(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_setPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:setPosition");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_setPosition'", nullptr);
            return 0;
        }
        cobj->setPosition(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:setPosition",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_setPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_getBuffer(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_getBuffer'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_getBuffer'", nullptr);
            return 0;
        }
        const char* ret = cobj->getBuffer();
        tolua_pushstring(tolua_S,(const char*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:getBuffer",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_getBuffer'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_getEndian(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_getEndian'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_getEndian'", nullptr);
            return 0;
        }
        int ret = cobj->getEndian();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:getEndian",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_getEndian'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_readString(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_readString'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:readString");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_readString'", nullptr);
            return 0;
        }
        std::string ret = cobj->readString(arg0);
        tolua_pushcppstring(tolua_S,ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:readString",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_readString'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_getPosition(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_getPosition'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_getPosition'", nullptr);
            return 0;
        }
        int ret = cobj->getPosition();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:getPosition",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_getPosition'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeLongLong(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeLongLong'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        long long arg0;

        ok &= luaval_to_long_long(tolua_S, 2,&arg0, "ByteArray:writeLongLong");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeLongLong'", nullptr);
            return 0;
        }
        cobj->writeLongLong(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeLongLong",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeLongLong'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_clear(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_clear'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_clear'", nullptr);
            return 0;
        }
        cobj->clear();
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:clear",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_clear'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_getBytesAvailable(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_getBytesAvailable'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 0) 
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_getBytesAvailable'", nullptr);
            return 0;
        }
        int ret = cobj->getBytesAvailable();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:getBytesAvailable",argc, 0);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_getBytesAvailable'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeUnsignedChar(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeUnsignedChar'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        uint16_t arg0;

        ok &= luaval_to_uint16(tolua_S, 2,&arg0, "ByteArray:writeUnsignedChar");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeUnsignedChar'", nullptr);
            return 0;
        }
        cobj->writeUnsignedChar(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeUnsignedChar",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeUnsignedChar'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeInt(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeInt'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        int arg0;

        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:writeInt");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeInt'", nullptr);
            return 0;
        }
        cobj->writeInt(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeInt",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeInt'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_writeUnsignedShort(lua_State* tolua_S)
{
    int argc = 0;
    ByteArray* cobj = nullptr;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif


#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertype(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    cobj = (ByteArray*)tolua_tousertype(tolua_S,1,0);

#if COCOS2D_DEBUG >= 1
    if (!cobj) 
    {
        tolua_error(tolua_S,"invalid 'cobj' in function 'lua_jt_ByteArray_ByteArray_writeUnsignedShort'", nullptr);
        return 0;
    }
#endif

    argc = lua_gettop(tolua_S)-1;
    if (argc == 1) 
    {
        unsigned short arg0;

        ok &= luaval_to_ushort(tolua_S, 2, &arg0, "ByteArray:writeUnsignedShort");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_writeUnsignedShort'", nullptr);
            return 0;
        }
        cobj->writeUnsignedShort(arg0);
        lua_settop(tolua_S, 1);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d \n", "ByteArray:writeUnsignedShort",argc, 1);
    return 0;

#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_writeUnsignedShort'.",&tolua_err);
#endif

    return 0;
}
int lua_jt_ByteArray_ByteArray_checkCPUEndian(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 0)
    {
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_checkCPUEndian'", nullptr);
            return 0;
        }
        int ret = ByteArray::checkCPUEndian();
        tolua_pushnumber(tolua_S,(lua_Number)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ByteArray:checkCPUEndian",argc, 0);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_checkCPUEndian'.",&tolua_err);
#endif
    return 0;
}
int lua_jt_ByteArray_ByteArray_create(lua_State* tolua_S)
{
    int argc = 0;
    bool ok  = true;

#if COCOS2D_DEBUG >= 1
    tolua_Error tolua_err;
#endif

#if COCOS2D_DEBUG >= 1
    if (!tolua_isusertable(tolua_S,1,"ByteArray",0,&tolua_err)) goto tolua_lerror;
#endif

    argc = lua_gettop(tolua_S) - 1;

    if (argc == 1)
    {
        int arg0;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_create'", nullptr);
            return 0;
        }
        ByteArray* ret = ByteArray::create(arg0);
        object_to_luaval<ByteArray>(tolua_S, "ByteArray",(ByteArray*)ret);
        return 1;
    }
    if (argc == 2)
    {
        int arg0;
        int arg1;
        ok &= luaval_to_int32(tolua_S, 2,(int *)&arg0, "ByteArray:create");
        ok &= luaval_to_int32(tolua_S, 3,(int *)&arg1, "ByteArray:create");
        if(!ok)
        {
            tolua_error(tolua_S,"invalid arguments in function 'lua_jt_ByteArray_ByteArray_create'", nullptr);
            return 0;
        }
        ByteArray* ret = ByteArray::create(arg0, arg1);
        object_to_luaval<ByteArray>(tolua_S, "ByteArray",(ByteArray*)ret);
        return 1;
    }
    luaL_error(tolua_S, "%s has wrong number of arguments: %d, was expecting %d\n ", "ByteArray:create",argc, 1);
    return 0;
#if COCOS2D_DEBUG >= 1
    tolua_lerror:
    tolua_error(tolua_S,"#ferror in function 'lua_jt_ByteArray_ByteArray_create'.",&tolua_err);
#endif
    return 0;
}
static int lua_jt_ByteArray_ByteArray_finalize(lua_State* tolua_S)
{
    printf("luabindings: finalizing LUA object (ByteArray)");
    return 0;
}

int lua_register_jt_ByteArray_ByteArray(lua_State* tolua_S)
{
    tolua_usertype(tolua_S,"ByteArray");
    tolua_cclass(tolua_S,"ByteArray","ByteArray","cc.Ref",nullptr);

    tolua_beginmodule(tolua_S,"ByteArray");
        tolua_function(tolua_S,"readUnsignedShort",lua_jt_ByteArray_ByteArray_readUnsignedShort);
        tolua_function(tolua_S,"writeString",lua_jt_ByteArray_ByteArray_writeString);
        tolua_function(tolua_S,"writeShort",lua_jt_ByteArray_ByteArray_writeShort);
        tolua_function(tolua_S,"readBool",lua_jt_ByteArray_ByteArray_readBool);
        tolua_function(tolua_S,"readByte",lua_jt_ByteArray_ByteArray_readByte);
        tolua_function(tolua_S,"writeUnsignedInt",lua_jt_ByteArray_ByteArray_writeUnsignedInt);
        tolua_function(tolua_S,"readLongLong",lua_jt_ByteArray_ByteArray_readLongLong);
        tolua_function(tolua_S,"readUnsignedInt",lua_jt_ByteArray_ByteArray_readUnsignedInt);
        tolua_function(tolua_S,"getLength",lua_jt_ByteArray_ByteArray_getLength);
        tolua_function(tolua_S,"writeBool",lua_jt_ByteArray_ByteArray_writeBool);
        tolua_function(tolua_S,"readShort",lua_jt_ByteArray_ByteArray_readShort);
        tolua_function(tolua_S,"readInt",lua_jt_ByteArray_ByteArray_readInt);
        tolua_function(tolua_S,"readUnsignedByte",lua_jt_ByteArray_ByteArray_readUnsignedByte);
        tolua_function(tolua_S,"writeByte",lua_jt_ByteArray_ByteArray_writeByte);
        tolua_function(tolua_S,"setEndian",lua_jt_ByteArray_ByteArray_setEndian);
        tolua_function(tolua_S,"setPosition",lua_jt_ByteArray_ByteArray_setPosition);
        tolua_function(tolua_S,"getBuffer",lua_jt_ByteArray_ByteArray_getBuffer);
        tolua_function(tolua_S,"getEndian",lua_jt_ByteArray_ByteArray_getEndian);
        tolua_function(tolua_S,"readString",lua_jt_ByteArray_ByteArray_readString);
        tolua_function(tolua_S,"getPosition",lua_jt_ByteArray_ByteArray_getPosition);
        tolua_function(tolua_S,"writeLongLong",lua_jt_ByteArray_ByteArray_writeLongLong);
        tolua_function(tolua_S,"clear",lua_jt_ByteArray_ByteArray_clear);
        tolua_function(tolua_S,"getBytesAvailable",lua_jt_ByteArray_ByteArray_getBytesAvailable);
        tolua_function(tolua_S,"writeUnsignedChar",lua_jt_ByteArray_ByteArray_writeUnsignedChar);
        tolua_function(tolua_S,"writeInt",lua_jt_ByteArray_ByteArray_writeInt);
        tolua_function(tolua_S,"writeUnsignedShort",lua_jt_ByteArray_ByteArray_writeUnsignedShort);
        tolua_function(tolua_S,"checkCPUEndian", lua_jt_ByteArray_ByteArray_checkCPUEndian);
        tolua_function(tolua_S,"create", lua_jt_ByteArray_ByteArray_create);
    tolua_endmodule(tolua_S);
    std::string typeName = typeid(ByteArray).name();
    g_luaType[typeName] = "ByteArray";
    g_typeCast["ByteArray"] = "ByteArray";
    return 1;
}
TOLUA_API int register_all_jt_ByteArray(lua_State* tolua_S)
{
	tolua_open(tolua_S);
	
	tolua_module(tolua_S,"jt",0);
	tolua_beginmodule(tolua_S,"jt");

	lua_register_jt_ByteArray_ByteArray(tolua_S);

	tolua_endmodule(tolua_S);
	return 1;
}

