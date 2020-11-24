#include <iostream>
#include <string>

class BaseDeDatos
{
	public:
		BaseDeDatos(){std::cout << "\nBase de datos.";}
		virtual ~BaseDeDatos(){}
		virtual void Configurar_() = 0;
		virtual void Consultar_() = 0;
		virtual void set_db(std::string db){db_ = db;}
		virtual void set_user(std::string user){user_ = user;}
		virtual void set_pass(std::string pass){pass_ = pass;}
		virtual void set_query(std::string query){query_ = query;}

    protected:
        std::string db_, user_, pass_, query_;
};

class MySQL : public BaseDeDatos
{
	public:
		MySQL(){std::cout << "\nMySQL";}
		virtual ~MySQL(){}
		virtual void Configurar_()
		{
            std::cout << "\nMySQL Connection: " << db_ << ", " << user_ << ", " << pass_;
		}
		virtual void Consultar_()
		{
            std::cout << "\nMySQL Query: " << query_;
		}
};

class SQLite3 : public BaseDeDatos
{
	public:
		SQLite3(){std::cout << "\nSQLite3";}
		virtual ~SQLite3(){}
		virtual void Configurar_()
		{
            std::cout << "\nSQLite3 Connection: " << db_ << ", " << user_ << ", " << pass_;
		}
		virtual void Consultar_()
		{
            std::cout << "\nSQLite3 Query: " << query_;
		}
};

class Conexion
{
    public:
        Conexion(){};
        Conexion(std::string* tipo_base)
        {
            if(*tipo_base == "MySQL")
                base = new MySQL;
            else if (*tipo_base == "SQLite3")
                base = new SQLite3;
        }
        ~Conexion(){delete base;}
        void Datos(std::string db, std::string user, std::string pass, std::string query)
        {
            base->set_db(db);
            base->set_user(user);
            base->set_pass(pass);
            base->set_query(query);
        }

        BaseDeDatos* base;
};

int main()
{
    std::string cad1 = "MySQL", cad2 = "SQLite3";

    Conexion* conn1 = new Conexion(&cad1);
    conn1->Datos("base1", "usuario", "pass", "query");
    conn1->base->Configurar_();
    conn1->base->Consultar_();
    delete conn1;

    conn1 = new Conexion(&cad2);
    conn1->Datos("base2", "usuario2", "pass2", "query2");
    conn1->base->Configurar_();
    conn1->base->Consultar_();
    delete conn1;

    return 0;
}
