#include <iostream>
#include <string>
#include <stdlib.h>
 
using namespace std;
 
template <class T>
 
class Node{
    public:
        Node();
        Node(T);
        ~Node();
 
        Node *next;
        T data;
 
        void delete_all();
        void print();
};

template<typename T>
 
Node<T>::Node(){
    data = NULL;
    next = NULL;
}
 
// Constructor por parámetro
template<typename T>
Node<T>::Node(T data_){
    data = data_;
    next = NULL;
}
 
// Eliminar todos los Nodos
template<typename T>
void Node<T>::delete_all(){
    if (next)
        next->delete_all();
    delete this;
}
 
// Imprimir un Nodo
template<typename T>
void Node<T>::print(){
    //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
    cout << data << "-> ";
}
 
template <class T>
 
class List
{
    public:
        List();
        ~List();
 
        void add_head(T);
        void add_end(T);
        void add_sort(T);
        void concat(List);
        void del_all();
        void del_by_data(T);
        void del_by_position(int);
        void fill_by_user(int);
        void fill_random(int);
        void intersection(List);
        void invert();
        void load_file(string);
        void print();
        void save_file(string);
        void search(T);
        void sort();
 
    private:
        Node<T> *m_head;
        int m_num_nodes;
};

template<typename T>
List<T>::List()
{
    m_num_nodes = 0;
    m_head = NULL;
}
 
// Insertar al inicio
template<typename T>
void List<T>::add_head(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        new_node->next = m_head;
        m_head = new_node;
 
        while (temp) {
            temp = temp->next;
        }
    }
    m_num_nodes++;
}
 
// Insertar al final
template<typename T>
void List<T>::add_end(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new_node;
    }
    m_num_nodes++;
}
 
// Insertar de manera ordenada
template<typename T>
void List<T>::add_sort(T data_)
{
    Node<T> *new_node = new Node<T> (data_);
    Node<T> *temp = m_head;
 
    if (!m_head) {
        m_head = new_node;
    } else {
        if (m_head->data > data_) {
            new_node->next = m_head;
            m_head = new_node;
        } else {
            while ((temp->next != NULL) && (temp->next->data < data_)) {
                temp = temp->next;
            }
            new_node->next = temp->next;
            temp->next = new_node;
        }
    }
    m_num_nodes++;
}
 
// Concatenar a otra List
template<typename T>
void List<T>::concat(List list)
{
    Node<T> *temp2 = list.m_head;
 
    while (temp2) {
        add_end(temp2->data);
        temp2 = temp2->next;
    }
}
 
// Eliminar todos los nodos
template<typename T>
void List<T>::del_all()
{
    m_head->delete_all();
    m_head = 0;
}
 
// Eliminar por data del nodo
template<typename T>
void List<T>::del_by_data(T data_)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = m_head->next;
 
    int cont = 0;
 
    if (m_head->data == data_) {
        m_head = temp->next;
    } else {
        while (temp1) {
            if (temp1->data == data_) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                cont++;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
 
    if (cont == 0) {
        cout << "No existe el dato " << endl;
    }
}
 
// Eliminar por posición del nodo
template<typename T>
void List<T>::del_by_position(int pos)
{
    Node<T> *temp = m_head;
    Node<T> *temp1 = temp->next;
 
    if (pos < 1 || pos > m_num_nodes) {
        cout << "Fuera de rango " << endl;
    } else if (pos == 1) {
        m_head = temp->next;
    } else {
        for (int i = 2; i <= pos; i++) {
            if (i == pos) {
                Node<T> *aux_node = temp1;
                temp->next = temp1->next;
                delete aux_node;
                m_num_nodes--;
            }
            temp = temp->next;
            temp1 = temp1->next;
        }
    }
}
 
// Llenar la Lista por teclado
template<typename T>
void List<T>::fill_by_user(int dim)
{
    T ele;
    for (int i = 0; i < dim; i++) {
        cout << "Ingresa el elemento " << i + 1 << endl;
        cin >> ele;
        add_end(ele);
    }
}
 
// Llenar la Lista aleatoriamente para enteros
template<typename T>
void List<T>::fill_random(int dim){
    srand(time(NULL));
    for (int i = 0; i < dim; i++) {
        add_end(rand() % 100);
    }
}
 
// Usado por el método intersección
template<typename T>
void insert_sort(T a[], int size)
{
    T temp;
    for (int i = 0; i < size; i++) {
        for (int j = i-1; j>= 0 && a[j+1] < a[j]; j--) {
            temp = a[j+1];
            a[j+1] = a[j];
            a[j] = temp;
        }
    }
}
 
// Números que coinciden en 2 Lists
template<typename T>
void List<T>::intersection(List list_2)
{
    Node<T> *temp = m_head;
    Node<T> *temp2 = list_2.m_head;
 
    // Creo otra Lista
    List intersection_list;
 
    int num_nodes_2 = list_2.m_num_nodes;
    int num_inter = 0;
 
    // Creo 2 vectores dinámicos
    T *v1 = new T[m_num_nodes];
    T *v2 = new T[num_nodes_2];
 
    // Lleno los vectores v1 y v2 con los datas de la lista original y segunda lista respectivamente
    int i = 0;
 
    while (temp) {
        v1[i] = temp->data;
        temp = temp->next;
        i++;
    }
 
    int j = 0;
 
    while (temp2) {
        v2[j] = temp2->data;
        temp2 = temp2->next;
        j++;
    }
 
    // Ordeno los vectores
    insert_sort(v1, m_num_nodes);
    insert_sort(v2, num_nodes_2);
 
    // Índice del 1er vector (v1)
    int v1_i = 0;
 
    // Índice del 2do vector (v2)
    int v2_i = 0;
 
  // Mientras no haya terminado de recorrer ambas Lists
  while (v1_i < m_num_nodes && v2_i < num_nodes_2) {
      if (v1[v1_i] == v2[v2_i]) {
          intersection_list.add_end(v1[v1_i]);
          v1_i++;
          v2_i++;
          num_inter++;
      } else if (v1[v1_i] < v2[v2_i]) {
          v1_i++;
      } else {
          v2_i++;
      }
  }
 
  // Solo si hay alguna intersección imprimo la nueva lista creada
  if (num_inter > 0) {
      cout << "Existen " << num_inter << " intersecciones " << endl;
      intersection_list.print();
  } else {
      cout << "No hay intersección en ambas listas" << endl;
  }
}
 
// Invertir la lista
template<typename T>
void List<T>::invert()
{
    Node<T> *prev = NULL;
    Node<T> *next = NULL;
    Node<T> *temp = m_head;
 
    while (temp) {
        next = temp->next;
        temp->next = prev;
        prev = temp;
        temp = next;
    }
    m_head = prev;
}
 
// Cargar una lista desde un archivo
template<typename T>
void List<T>::load_file(string file)
{
    T line;
    ifstream in;
    in.open(file.c_str());
 
    if (!in.is_open()) {
        cout << "No se puede abrir el archivo: " << file << endl << endl;
    } else {
        while (in >> line) {
            add_end(line);
        }
    }
    in.close();
}
 
// Imprimir la Lista
template<typename T>
void List<T>::print()
{
    Node<T> *temp = m_head;
    if (!m_head) {
        cout << "La Lista está vacía " << endl;
    } else {
        while (temp) {
            temp->print();
            if (!temp->next) cout << "NULL";
                temp = temp->next;
        }
  }
  cout << endl << endl;
}
 
// Buscar el dato de un nodo
template<typename T>
void List<T>::search(T data_)
{
    Node<T> *temp = m_head;
    int cont = 1;
    int cont2 = 0;
 
    while (temp) {
        if (temp->data == data_) {
            cout << "El dato se encuentra en la posición: " << cont << endl;
            cont2++;
        }
        temp = temp->next;
        cont++;
    }
 
    if (cont2 == 0) {
        cout << "No existe el dato " << endl;
    }
    cout << endl << endl;
}
 
// Ordenar de manera ascendente
template<typename T>
void List<T>::sort()
{
    T temp_data;
    Node<T> *aux_node = m_head;
    Node<T> *temp = aux_node;
 
    while (aux_node) {
        temp = aux_node;
 
        while (temp->next) {
            temp = temp->next;
 
            if (aux_node->data > temp->data) {
                temp_data = aux_node->data;
                aux_node->data = temp->data;
                temp->data = temp_data;
            }
        }
 
        aux_node = aux_node->next;
    }
}
 
// Guardar una lista en un archivo
template<typename T>
void List<T>::save_file(string file)
{
    Node<T> *temp = m_head;
    ofstream out;
    out.open(file.c_str());
 
    if (!out.is_open()) {
        cout << "No se puede guardar el archivo " << endl;
    } else {
        while (temp) {
            out << temp->data;
            out << " ";
            temp = temp->next;
        }
    }
    out.close();
}
 
template<typename T>
List<T>::~List() {}

int main()
{
    List<int> list_1;
    List<int> list_2;
    int ele;
 
    int dim;
    int pos;
    string file_with_list;
 
    cout << "Ingresa la dimensión de la lista: " << endl;
    cin >> dim;
 
    list_1.fill_random(dim);
 
    cout << "Lista A al inicio " << endl;
    list_1.print();
 
    cout << "Agrega un elemento por la cabeza: " << endl;
    cin >> ele;
    list_1.add_head(ele);
    list_1.print();
 
    cout << "Lista invertida: " << endl;
    list_1.invert();
    list_1.print();
 
    cout << "Lista ordenada: " << endl;
    list_1.sort();
    list_1.print();
 
    cout << "Agrega un elemento. Será insertado ordenadamente: " << endl;
    cin >> ele;
    list_1.add_sort(ele);
    list_1.print();
 
    cout << "Busca un elemento: " << endl;
    cin >> ele;
    list_1.search(ele);
 
    cout << "Elimina un elemento por dato: " << endl;
    cin >> ele;
    list_1.del_by_data(ele);
    list_1.print();
 
    cout << "Elimina un elemento por posición: " << endl;
    cin >> pos;
    list_1.del_by_position(pos);
    list_1.print();
 
    cout << "Cargar una lista desde archivo - Ingresa el nombre(Ex: list.txt): " << endl;
    // El archivo debe estar en el mismo directorio que este programa
    cin >> file_with_list;
    list_2.load_file(file_with_list);
    cout << "Lista B: " << endl;
    list_2.print();
 
    cout << "Guardar la lista en un archivo - Ingresa el nombre(Ex: list2.txt): " << endl;
    cin >> file_with_list;
    list_2.save_file(file_with_list);
 
    cout << "Interseccion entre las listas A y B: " << endl;
    list_1.intersection(list_2);
 
    cout << "Listas A y B concatenadas: " << endl;
    list_1.concat(list_2);
    list_1.print();
 
    list_1.del_all();
    list_1.print();
 
    return 0;
}
