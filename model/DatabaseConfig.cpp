/**
 * Knetik Platform API Documentation latest 
 * This is the spec for the Knetik API.  Use this in conjunction with the documentation found at https://knetikcloud.com.
 *
 * OpenAPI spec version: latest 
 * Contact: support@knetik.com
 *
 * NOTE: This class is auto generated by the swagger code generator 2.3.0-SNAPSHOT.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 */



#include "DatabaseConfig.h"

namespace com {
namespace knetikcloud {
namespace client {
namespace model {

DatabaseConfig::DatabaseConfig()
{
    m_MongoIsSet = false;
    m_SqlIsSet = false;
}

DatabaseConfig::~DatabaseConfig()
{
}

void DatabaseConfig::validate()
{
    // TODO: implement validation
}

web::json::value DatabaseConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(m_MongoIsSet)
    {
        val[U("mongo")] = ModelBase::toJson(m_Mongo);
    }
    if(m_SqlIsSet)
    {
        val[U("sql")] = ModelBase::toJson(m_Sql);
    }

    return val;
}

void DatabaseConfig::fromJson(web::json::value& val)
{
    if(val.has_field(U("mongo")))
    {
        if(!val[U("mongo")].is_null())
        {
            std::shared_ptr<MongoDatabaseConfig> newItem(new MongoDatabaseConfig());
            newItem->fromJson(val[U("mongo")]);
            setMongo( newItem );
        }
    }
    if(val.has_field(U("sql")))
    {
        if(!val[U("sql")].is_null())
        {
            std::shared_ptr<SqlDatabaseConfig> newItem(new SqlDatabaseConfig());
            newItem->fromJson(val[U("sql")]);
            setSql( newItem );
        }
    }
}

void DatabaseConfig::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(m_MongoIsSet)
    {
        if (m_Mongo.get())
        {
            m_Mongo->toMultipart(multipart, U("mongo."));
        }
        
    }
    if(m_SqlIsSet)
    {
        if (m_Sql.get())
        {
            m_Sql->toMultipart(multipart, U("sql."));
        }
        
    }
}

void DatabaseConfig::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
    if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
    {
        namePrefix += U(".");
    }

    if(multipart->hasContent(U("mongo")))
    {
        if(multipart->hasContent(U("mongo")))
        {
            std::shared_ptr<MongoDatabaseConfig> newItem(new MongoDatabaseConfig());
            newItem->fromMultiPart(multipart, U("mongo."));
            setMongo( newItem );
        }
    }
    if(multipart->hasContent(U("sql")))
    {
        if(multipart->hasContent(U("sql")))
        {
            std::shared_ptr<SqlDatabaseConfig> newItem(new SqlDatabaseConfig());
            newItem->fromMultiPart(multipart, U("sql."));
            setSql( newItem );
        }
    }
}

std::shared_ptr<MongoDatabaseConfig> DatabaseConfig::getMongo() const
{
    return m_Mongo;
}


void DatabaseConfig::setMongo(std::shared_ptr<MongoDatabaseConfig> value)
{
    m_Mongo = value;
    m_MongoIsSet = true;
}
bool DatabaseConfig::mongoIsSet() const
{
    return m_MongoIsSet;
}

void DatabaseConfig::unsetMongo()
{
    m_MongoIsSet = false;
}

std::shared_ptr<SqlDatabaseConfig> DatabaseConfig::getSql() const
{
    return m_Sql;
}


void DatabaseConfig::setSql(std::shared_ptr<SqlDatabaseConfig> value)
{
    m_Sql = value;
    m_SqlIsSet = true;
}
bool DatabaseConfig::sqlIsSet() const
{
    return m_SqlIsSet;
}

void DatabaseConfig::unsetSql()
{
    m_SqlIsSet = false;
}

}
}
}
}

