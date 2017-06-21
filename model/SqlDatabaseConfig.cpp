/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "SqlDatabaseConfig.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

SqlDatabaseConfig::SqlDatabaseConfig()
{
    m_Connection_pool_size = 0;
    m_Connection_pool_sizeIsSet = false;
    m_Db_name = U("");
    m_Db_nameIsSet = false;
    m_Hostname = U("");
    m_HostnameIsSet = false;
    m_Password = U("");
    m_PasswordIsSet = false;
    m_Port = 0;
    m_PortIsSet = false;
    m_Username = U("");
    m_UsernameIsSet = false;
    
}

SqlDatabaseConfig::~SqlDatabaseConfig()
{
}

void SqlDatabaseConfig::validate()
{
    // TODO: implement validation
}

web::json::value SqlDatabaseConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_Connection_pool_sizeIsSet)
    {
        val[U("connection_pool_size")] = ModelBase::toJson(m_Connection_pool_size);
    }
    if(m_Db_nameIsSet)
    {
        val[U("db_name")] = ModelBase::toJson(m_Db_name);
    }
    if(m_HostnameIsSet)
    {
        val[U("hostname")] = ModelBase::toJson(m_Hostname);
    }
    if(m_PasswordIsSet)
    {
        val[U("password")] = ModelBase::toJson(m_Password);
    }
    if(m_PortIsSet)
    {
        val[U("port")] = ModelBase::toJson(m_Port);
    }
    if(m_UsernameIsSet)
    {
        val[U("username")] = ModelBase::toJson(m_Username);
    }
    

    return val;
}

void SqlDatabaseConfig::fromJson(web::json::value& val)
{
    if(val.has_field(U("connection_pool_size")))
    {
        setConnectionPoolSize(ModelBase::int32_tFromJson(val[U("connection_pool_size")]));
    }
    if(val.has_field(U("db_name")))
    {
        setDbName(ModelBase::stringFromJson(val[U("db_name")]));
        
    }
    if(val.has_field(U("hostname")))
    {
        setHostname(ModelBase::stringFromJson(val[U("hostname")]));
        
    }
    if(val.has_field(U("password")))
    {
        setPassword(ModelBase::stringFromJson(val[U("password")]));
        
    }
    if(val.has_field(U("port")))
    {
        setPort(ModelBase::int32_tFromJson(val[U("port")]));
    }
    if(val.has_field(U("username")))
    {
        setUsername(ModelBase::stringFromJson(val[U("username")]));
        
    }
    
}

void SqlDatabaseConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_Connection_pool_sizeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("connection_pool_size"), m_Connection_pool_size));
    }
    if(m_Db_nameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("db_name"), m_Db_name));
        
    }
    if(m_HostnameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("hostname"), m_Hostname));
        
    }
    if(m_PasswordIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("password"), m_Password));
        
    }
    if(m_PortIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("port"), m_Port));
    }
    if(m_UsernameIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
        
    }
    
}

void SqlDatabaseConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("connection_pool_size")))
    {
        setConnectionPoolSize(ModelBase::int32_tFromHttpContent(multipart->getContent(U("connection_pool_size"))));
    }
    if(multipart->hasContent(U("db_name")))
    {
        setDbName(ModelBase::stringFromHttpContent(multipart->getContent(U("db_name"))));
        
    }
    if(multipart->hasContent(U("hostname")))
    {
        setHostname(ModelBase::stringFromHttpContent(multipart->getContent(U("hostname"))));
        
    }
    if(multipart->hasContent(U("password")))
    {
        setPassword(ModelBase::stringFromHttpContent(multipart->getContent(U("password"))));
        
    }
    if(multipart->hasContent(U("port")))
    {
        setPort(ModelBase::int32_tFromHttpContent(multipart->getContent(U("port"))));
    }
    if(multipart->hasContent(U("username")))
    {
        setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
        
    }
    
}


int32_t SqlDatabaseConfig::getConnectionPoolSize() const
{
    return m_Connection_pool_size;
}
void SqlDatabaseConfig::setConnectionPoolSize(int32_t value)
{
    m_Connection_pool_size = value;
    m_Connection_pool_sizeIsSet = true;
}
bool SqlDatabaseConfig::connection_pool_sizeIsSet() const
{
    return m_Connection_pool_sizeIsSet;
}
void SqlDatabaseConfig::unsetConnection_pool_size()
{
    m_Connection_pool_sizeIsSet = false;
}
utility::string_t SqlDatabaseConfig::getDbName() const
{
    return m_Db_name;
}
void SqlDatabaseConfig::setDbName(utility::string_t value)
{
    m_Db_name = value;
    m_Db_nameIsSet = true;
}
bool SqlDatabaseConfig::db_nameIsSet() const
{
    return m_Db_nameIsSet;
}
void SqlDatabaseConfig::unsetDb_name()
{
    m_Db_nameIsSet = false;
}
utility::string_t SqlDatabaseConfig::getHostname() const
{
    return m_Hostname;
}
void SqlDatabaseConfig::setHostname(utility::string_t value)
{
    m_Hostname = value;
    m_HostnameIsSet = true;
}
bool SqlDatabaseConfig::hostnameIsSet() const
{
    return m_HostnameIsSet;
}
void SqlDatabaseConfig::unsetHostname()
{
    m_HostnameIsSet = false;
}
utility::string_t SqlDatabaseConfig::getPassword() const
{
    return m_Password;
}
void SqlDatabaseConfig::setPassword(utility::string_t value)
{
    m_Password = value;
    m_PasswordIsSet = true;
}
bool SqlDatabaseConfig::passwordIsSet() const
{
    return m_PasswordIsSet;
}
void SqlDatabaseConfig::unsetPassword()
{
    m_PasswordIsSet = false;
}
int32_t SqlDatabaseConfig::getPort() const
{
    return m_Port;
}
void SqlDatabaseConfig::setPort(int32_t value)
{
    m_Port = value;
    m_PortIsSet = true;
}
bool SqlDatabaseConfig::portIsSet() const
{
    return m_PortIsSet;
}
void SqlDatabaseConfig::unsetPort()
{
    m_PortIsSet = false;
}
utility::string_t SqlDatabaseConfig::getUsername() const
{
    return m_Username;
}
void SqlDatabaseConfig::setUsername(utility::string_t value)
{
    m_Username = value;
    m_UsernameIsSet = true;
}
bool SqlDatabaseConfig::usernameIsSet() const
{
    return m_UsernameIsSet;
}
void SqlDatabaseConfig::unsetUsername()
{
    m_UsernameIsSet = false;
}

}
}
}
}

